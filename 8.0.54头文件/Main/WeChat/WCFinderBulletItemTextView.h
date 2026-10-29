@interface WCFinderBulletItemTextView : UIView
{
    WCFinderBulletItem * _item; // +0x8
    RichTextView * _contentTextView; // +0x10
    UIImageView * _userIdentityImg; // +0x18
}
- (id)initWithStyleConfig:(id)arg1 maxWidth:(double)arg2;
- (id)getCurrentSubTitleTextAttributeObj;
- (void)updateContent:(id)arg1 userIdentity:(int)arg2;
- (id)item;
- (void)setItem:(id)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)userIdentityImg;
- (void)setUserIdentityImg:(id)arg1;
- (void).cxx_destruct;
@end

