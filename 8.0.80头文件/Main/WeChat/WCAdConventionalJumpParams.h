@interface WCAdConventionalJumpParams : NSObject
{
    WCAdQrCodeScanInfo * _adQrCodeScanInfo; // +0x8
    WCAdCardBtnInfo * _actionInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    unsigned long long _scene; // +0x20
    UIView * _originView; // +0x28
    unsigned long long _clickIndex; // +0x30
    NSArray * _originGridRectsInScreen; // +0x38
    CGRect _originRectInScreen; // +0x40
}
- (id)adQrCodeScanInfo;
- (void)setAdQrCodeScanInfo:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (unsigned long long)clickIndex;
- (void)setClickIndex:(unsigned long long)arg1;
- (CGRect)originRectInScreen;
- (void)setOriginRectInScreen:(CGRect)arg1;
- (id)originGridRectsInScreen;
- (void)setOriginGridRectsInScreen:(id)arg1;
- (void).cxx_destruct;
@end
