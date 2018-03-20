#include <windows.h>

#include "ChatControlMessageImage.h"
#include "../../../../../../WhatsApp/Message.h"
#include "../../../../ImageDecoder.h"

std::string buildImageCaption(WhatsappMessage &message)
{
	return message.getMediaCaption();
}

ChatControlMessageImage::ChatControlMessageImage(WhatsappMessage &message, int width, ImageDecoder &imageDecoder)
	: ChatControlMessageWithPreviewAndText(message, buildImageCaption(message), width, imageDecoder)
{
}

ChatControlMessageImage::~ChatControlMessageImage()
{
}