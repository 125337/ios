@interface SystemAuthCommonSheetView : MMAutoLayoutSheetView
{
    BOOL _isComplete; // +0x8
    id /* block */ _aggreeBlock; // +0x10
    id /* block */ _rejectBlock; // +0x18
    id /* block */ _ignoreBlock; // +0x20
    _TtC6WeChat24SystemAuthCapabilityInfo * _capabilityInfo; // +0x28
    SystemAuthBizInfo * _bizInfo; // +0x30
}
- (id)initWithAuthCapability:(unsigned int)arg1 scene:(unsigned long long)arg2;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)setIsComplete:(BOOL)arg1;
- (void)pageSheetDidAppear;
- (id /* block */)aggreeBlock;
- (void)setAggreeBlock:(id /* block */)arg1;
- (id /* block */)rejectBlock;
- (void)setRejectBlock:(id /* block */)arg1;
- (id /* block */)ignoreBlock;
- (void)setIgnoreBlock:(id /* block */)arg1;
- (id)capabilityInfo;
- (void)setCapabilityInfo:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (BOOL)isComplete;
- (void).cxx_destruct;
@end

