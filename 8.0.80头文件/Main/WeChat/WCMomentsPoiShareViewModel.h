@interface WCMomentsPoiShareViewModel : WCMomentsPostShareBaseViewModel
{
    BOOL _hasUnsupportedMedia; // +0x8
    BOOL _shareToBizBtnEnabled; // +0x9
}
- (id)initWithDataItem:(id)arg1 scene:(long long)arg2;
- (BOOL)reallyShareFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (BOOL)_shareImagesToPoiFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)shouldShowShareButton;
- (id)svgIconName;
- (id)svgIconColor;
- (id)tips;
- (double)fontSize;
- (BOOL)hasUnsupportedMedia;
- (void)setHasUnsupportedMedia:(BOOL)arg1;
- (BOOL)shareToBizBtnEnabled;
- (void)setShareToBizBtnEnabled:(BOOL)arg1;
@end
