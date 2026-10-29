@interface MMImgDataItem : NSObject
{
    unsigned int _type; // +0x8
    NSString * _dataId; // +0x10
}
- (BOOL)isImageType;
- (BOOL)isVideoType;
- (id)description;
- (id)uuid;
- (id)thumbImage;
- (BOOL)isRawMediaExpired;
- (BOOL)isFileImg;
- (id)image;
- (id)imagePath;
- (BOOL)isHDImage;
- (id)hdImage;
- (id)hdImagePath;
- (unsigned int)hdImageSize;
- (BOOL)isLivePhoto;
- (id)livePhotoPath;
- (id)hdLivePhotoPath;
- (unsigned int)hdLivePhotoSize;
- (BOOL)isFileVideo;
- (id)videoThumbImage;
- (id)videoPath;
- (unsigned int)videoDuration;
- (BOOL)isRawVideoPreviewing;
- (BOOL)isRawVideo;
- (id)rawVideoPath;
- (unsigned long long)rawVideoSize;
- (id)generatePlayerInfo;
- (id)generateRawPlayerInfo;
- (BOOL)isBrandMPVideo;
- (id)brandMPVideoTitle;
- (id)brandMPVideoSourceUsername;
- (id)brandMPVideoSourceDisplayName;
- (id)brandMPVideoUrl;
- (id)brandMPVideoItem;
- (unsigned int)attachedVideoType;
- (id)attachedVideoUrl;
- (id)attachedVideoTitle;
- (id)generateForwardMsg;
- (id)generateFavItem;
- (id)generateWCDataItem;
- (id)fileId;
- (id)aesKey;
- (id)sourceImgInfo;
- (id)weappScreenshotContextInfo;
- (id)mpScreenshotArticleInfo;
- (BOOL)isLoadingFromICloud;
- (BOOL)isSending;
- (long long)GetMsgPreviewOpType;
- (BOOL)forbidDisplay;
- (unsigned int)type;
- (id)dataId;
- (void).cxx_destruct;
@end
