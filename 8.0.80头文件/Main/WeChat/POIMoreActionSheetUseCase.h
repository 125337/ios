@interface POIMoreActionSheetUseCase : NSObject <MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, POICorrectionGuideViewDelegate>
{
    ForwardMessageLogicController * _forwardLogicController; // +0x8
    POIInfo * _poiInfo; // +0x10
    id <POIMoreActionSheetViewLocationDelegate> _viewLocationDelegate; // +0x18
    id <POIMoreActionSheetUseCaseDelegate> _delegate; // +0x20
    unsigned int _poiSrcType; // +0x28
    unsigned int _poiBizSource; // +0x2c
    int _finderEnterScene; // +0x30
    int _finderCommentScene; // +0x34
    NSString * _poiReportSessionID; // +0x38
    MMScrollActionSheet * _scrollActionSheet; // +0x40
    unsigned long long _finderPoiFromObjectId; // +0x48
}
- (id)initWithPOIInfo:(id)arg1;
- (void)setupReportParamsWithPOIBizSource:(unsigned int)arg1 finderEnterScene:(int)arg2 finderCommentScene:(int)arg3 finderPoiFromObjectId:(unsigned long long)arg4;
- (void)showScrollActionSheet;
- (id)genMenuItemArray;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (void)forwardLocationMsg:(id)arg1;
- (unsigned long long)forwardMessageScene;
- (id)poiReportSessionID;
- (void)reportCustomMoreViewClickEvent:(id)arg1;
- (void)reportCustomMoreViewClickEvent:(id)arg1 dicParam:(id)arg2;
- (void)reportViewClickEventForPOIDetail:(id)arg1;
- (void)reportCustomActionSheetClickWithIndex:(unsigned long long)arg1;
- (id)finderDataReportParamDict;
- (id)getCurrentViewController;
- (void)OnOpenLocationWAApp;
- (void)copyAddressString;
- (id)viewLocationDelegate;
- (void)setViewLocationDelegate:(id)arg1;
- (void)setPoiReportSessionID:(id)arg1;
- (unsigned int)poiSrcType;
- (void)setPoiSrcType:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollActionSheet;
- (void)setScrollActionSheet:(id)arg1;
- (unsigned int)poiBizSource;
- (void)setPoiBizSource:(unsigned int)arg1;
- (int)finderEnterScene;
- (void)setFinderEnterScene:(int)arg1;
- (int)finderCommentScene;
- (void)setFinderCommentScene:(int)arg1;
- (unsigned long long)finderPoiFromObjectId;
- (void)setFinderPoiFromObjectId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
