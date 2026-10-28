@interface MMVideoBrowserViewModel : NSObject <MMMediaBrowserViewModel>
{
    BOOL _isEnableZoom; // +0x8
    AVAsset * _videoAsset; // +0x10
    NSString * _videoAssetID; // +0x18
    NSURL * _videoAssetUrl; // +0x20
    CMessageWrap * _msgWrap; // +0x28
    WCPlayerPlayArgs * _playArgs; // +0x30
}
- (id)initWithMsgWrap:(id)arg1;
- (id)getPlayArgs;
- (id)generatePlayArgs;
- (id)generateDownloadArgsWrap;
- (id)thumbImage;
- (BOOL)isEnableZoom;
- (id)viewClassName;
- (int)mediaType;
- (id)title;
- (id)subTitle;
- (id)getForwardMessageWrap;
- (id)generateFavItem;
- (id)generateVideoInfo;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (id)videoAssetID;
- (void)setVideoAssetID:(id)arg1;
- (id)videoAssetUrl;
- (void)setVideoAssetUrl:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void)setIsEnableZoom:(BOOL)arg1;
- (id)playArgs;
- (void)setPlayArgs:(id)arg1;
- (void).cxx_destruct;
@end
