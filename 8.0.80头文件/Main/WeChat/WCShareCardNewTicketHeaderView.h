@interface WCShareCardNewTicketHeaderView : WCShareCardBaseHeaderView <MMWebImageViewDelegate>
{
    double _viewWidth; // +0x8
    id <WCShareCardNewTicketHeaderDelegate> _delegate; // +0x10
    BOOL _isHaveCells; // +0x18
    unsigned int _usedStoreCount; // +0x1c
    BOOL _shouldShowGiftView; // +0x20
    NSString * _giftUsrName; // +0x28
    NSString * _giftDesc; // +0x30
}
- (id)initWithViewWidth:(double)arg1 CardSourceData:(id)arg2 isShareCard:(BOOL)arg3 cardStatus:(int)arg4 isNeedHideAccecptBtn:(BOOL)arg5 delegate:(id)arg6 usedStoreCount:(unsigned int)arg7 isHaveCells:(BOOL)arg8 shouldShowGift:(BOOL)arg9 giftUsrName:(id)arg10 giftDesc:(id)arg11;
- (void)initView;
- (id)createTitleInfoViewWithWidth:(double)arg1;
- (id)createDetailInfoViewWithWidth:(double)arg1;
- (id)createLocationInfoViewWithWidth:(double)arg1;
- (id)createMoreStoreView;
- (id)createHeadImgViewWithUrl:(id)arg1;
- (id)createAcceptBtn;
- (id)createUnnormalStateView;
- (id)createGiftView;
- (void)openUsedStoreView;
- (void)onLoadImageOK:(id)arg1;
- (void).cxx_destruct;
@end
