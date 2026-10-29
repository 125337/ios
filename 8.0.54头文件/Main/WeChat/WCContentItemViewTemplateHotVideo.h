@interface WCContentItemViewTemplateHotVideo : WCContentItemBaseView <WCImageViewDelegate, WCPlayerConfigViewControllerDelegate, WCActionSheetDelegate, UIGestureRecognizerDelegate>
{
    WCDataItem * m_oDataItem; // +0x38
    WCMediaItem * m_oMediaItem; // +0x40
    WCImageView * m_oWCCoverImage; // +0x48
    WCPlayerConfigViewController * _videoPlayerVC; // +0x50
    unsigned long long _legalityType; // +0x58
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)throwUrlMessage;
- (void)onLongTouch;
- (void)onClickWCImage:(id)arg1;
- (void)onLongPressedWCImage:(id)arg1;
- (void)playHotVideo;
- (id)getPlayerInfoWith:(BOOL)arg1;
- (id)getImage;
- (void)OnDownloadSuccessForFavoriteAdd;
- (void)onLongPress:(id)arg1;
- (id)generateMsgWithMediaWrap:(id)arg1;
- (id)generateFavWithMediaWrap:(id)arg1;
- (void)onForwardCancle:(id)arg1;
- (void)onForwardSuccess:(id)arg1;
- (void)onCloseFullScreenPlay:(id)arg1;
- (void)onCloseFullScreenPlayComplete:(id)arg1;
- (void)onTapAttachButton:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)videoPlayerVC;
- (void)setVideoPlayerVC:(id)arg1;
- (unsigned long long)legalityType;
- (void)setLegalityType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

