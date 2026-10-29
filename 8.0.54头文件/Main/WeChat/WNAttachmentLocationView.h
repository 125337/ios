@interface WNAttachmentLocationView : WNAttachmentBaseView <ViewLocationDelegate, FavForwardLogicDelegate>
- (void)layoutView;
- (id)getTitle;
- (id)getDescription;
- (id)getImage;
- (void)onClickObject;
- (void)onSendLocationToFriendWithViewController:(id)arg1;
- (id)getFavForawrdViewController;
@end

