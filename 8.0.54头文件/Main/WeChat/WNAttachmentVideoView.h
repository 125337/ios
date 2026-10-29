@interface WNAttachmentVideoView : WNAttachmentBaseView <FavSightViewDelegate, FavVideoCompressExt>
{
    FavSightView * _videoPlayer; // +0x8
}
+ (double)getHeightOfAttachment:(id)arg1 withWidth:(double)arg2;
- (id)initWithAttachment:(id)arg1;
- (void)layoutView;
- (void)tryConfigCompressVideoPath;
- (void)onClickObject;
- (void)onFavSightSizeDidChange:(id)arg1;
- (void)onFavVideoCompressFinish:(id)arg1 isSuccess:(BOOL)arg2;
- (void).cxx_destruct;
@end

