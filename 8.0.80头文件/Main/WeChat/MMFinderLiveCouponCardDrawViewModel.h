@interface MMFinderLiveCouponCardDrawViewModel : MMFinderLiveCouponCardViewModel
{
    BOOL _isRequesting; // +0x8
    id /* block */ _onRequestingStateChanged; // +0x10
}
- (Class)slotViewClass;
- (id)title;
- (id)valueWording;
- (id)subInfoTexts;
- (id)actionButtonTitle;
- (id)avatarImageURL;
- (void)handleExposed;
- (void)handleActionButtonClicked;
- (void)handleRequestSuccessWithResponse:(id)arg1;
- (void)handleRequestFailWithErrorCode:(long long)arg1 errorDesc:(id)arg2;
- (void)updateRequestingState:(BOOL)arg1;
- (BOOL)isRequesting;
- (void)setIsRequesting:(BOOL)arg1;
- (id /* block */)onRequestingStateChanged;
- (void)setOnRequestingStateChanged:(id /* block */)arg1;
- (void).cxx_destruct;
@end
