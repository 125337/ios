@interface WCFinderCommentIdentityActionSheetView : WCActionSheet
{
    unsigned long long _initizlizeSelectedType; // +0x8
    UIView * _tipsCustomView; // +0x10
    UIView * _finderCustomView; // +0x18
    UIView * _wechatCustomView; // +0x20
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (id)getFinderActionSheetView;
- (id)getWeChatActionSheetView;
- (id)getContentViewWithFinder:(id)arg1 wechatContact:(id)arg2;
- (void)tapFinderActionSheetCell;
- (void)tapWeChatActionSheetCell;
- (unsigned long long)initizlizeSelectedType;
- (void)setInitizlizeSelectedType:(unsigned long long)arg1;
- (id)tipsCustomView;
- (void)setTipsCustomView:(id)arg1;
- (id)finderCustomView;
- (void)setFinderCustomView:(id)arg1;
- (id)wechatCustomView;
- (void)setWechatCustomView:(id)arg1;
- (void).cxx_destruct;
@end
