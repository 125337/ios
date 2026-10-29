@interface BrandPendingSendViewState : NSObject
{
    BizArticlePendingSendBar * _bar; // +0x8
    CMessageWrap * _pendingWrap; // +0x10
    UITapGestureRecognizer * _dismissTap; // +0x18
    BrandPendingSendDismissTapDelegate * _dismissTapDelegate; // +0x20
    NSString * _reservationIdentifier; // +0x28
    id /* block */ _reservationReleaseBlock; // +0x30
}
- (void)dealloc;
- (id)bar;
- (void)setBar:(id)arg1;
- (id)pendingWrap;
- (void)setPendingWrap:(id)arg1;
- (id)dismissTap;
- (void)setDismissTap:(id)arg1;
- (id)dismissTapDelegate;
- (void)setDismissTapDelegate:(id)arg1;
- (id)reservationIdentifier;
- (void)setReservationIdentifier:(id)arg1;
- (id /* block */)reservationReleaseBlock;
- (void)setReservationReleaseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
