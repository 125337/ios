@interface WCMomentsPostShareBaseViewModel : NSObject <WCTimelineFooterItemViewModel>
{
    BOOL _Configurations_canShowShareButton; // +0x8
    WCDataItem * _dataItem; // +0x10
    long long _scene; // +0x18
    WCMomentsPostReportSession * _postSession; // +0x20
    NSString * _svgIconName; // +0x28
    UIColor * _svgIconColor; // +0x30
    NSString * _tips; // +0x38
    double _fontSize; // +0x40
}
- (void)dr_bindShareButton:(id)arg1;
- (void)dr_resetShareButton:(id)arg1;
- (id)initWithDataItem:(id)arg1 scene:(long long)arg2;
- (void)updateDataItem:(id)arg1;
- (BOOL)shouldDisplayItemInTimelineFooterView;
- (BOOL)shouldShowShareButton;
- (BOOL)hasActionRecordForShowingShareButton;
- (BOOL)shareFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)_prepareMediaDownloaders;
- (void)_startMediaDownloaders:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)reallyShareFromViewController:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)willDisplayShareButton;
- (void)didClickShareButton;
- (void)willStartSharing;
- (id)dataItem;
- (long long)scene;
- (BOOL)Configurations_canShowShareButton;
- (void)setConfigurations_canShowShareButton:(BOOL)arg1;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (id)svgIconName;
- (void)setSvgIconName:(id)arg1;
- (id)svgIconColor;
- (void)setSvgIconColor:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (void).cxx_destruct;
@end
