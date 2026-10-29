@interface NewLifeShareMessageView : CommonMessageCellView <ServiceAuthExt, NewLifeDetailShareViewAnimationBehavior>
{
    NewLifeShareCoverImageView * _coverView; // +0xa8
}
- (void)layoutContentView;
- (id)displayViewForImageBrowser;
- (id)coverView;
- (void)setHighlighted:(BOOL)arg1;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)onAppear;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (id)getNewLifeZoomAnimatorKey;
- (id)getNewLifeAnimationCardView;
- (id)getNewLifeAnimationCardImageView;
- (void)onNewLifeDetailShareViewAnimationBegin;
- (void)onNewLifeDetailShareViewAnimationEnd;
- (void)setCoverView:(id)arg1;
- (void).cxx_destruct;
@end

