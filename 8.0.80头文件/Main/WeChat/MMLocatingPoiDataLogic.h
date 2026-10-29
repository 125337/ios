@interface MMLocatingPoiDataLogic : NSObject <WCFinderPOIRelatedStreamViewModelDelegate>
{
    WCFinderPOIRelatedStreamViewModel * _streamModel; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    int _commentScene; // +0x20
    MMLocationPoiDetailModel * _detailModel; // +0x28
    WCFinderPOIParamsModel * _paramsModel; // +0x30
    double _lastStreamRequestTime; // +0x38
}
- (void)requestPoiDetail:(id)arg1 allowCache:(BOOL)arg2 success:(id /* block */)arg3 fail:(id /* block */)arg4;
- (void)requestPoiBasicInfo:(id)arg1 fromTid:(id)arg2 fromCommentScene:(int)arg3 groupBuyBypassData:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)requestPoiServiceInfo:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)requestPoiStream:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (void)onFinderPoiHeaderViewNeedRefresh;
- (void)onFinderPoiTabListError;
- (int)feedViewControllerScene;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)streamModel;
- (id)detailModel;
- (id)paramsModel;
- (void)setParamsModel:(id)arg1;
- (double)lastStreamRequestTime;
- (void).cxx_destruct;
@end
