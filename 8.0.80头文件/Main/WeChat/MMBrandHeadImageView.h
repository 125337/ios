@interface MMBrandHeadImageView : UIButton <IContactMgrExt, IStrangerContactMgrExt>
{
    UIImageView * m_frameView; // +0x8
    MMWebImageView * m_headView; // +0x10
    CGSize m_headSize; // +0x18
    NSString * m_username; // +0x28
    id m_oTarget; // +0x30
    SEL m_selAction; // +0x38
    id m_object; // +0x40
    id /* block */ _onClickBlock; // +0x48
}
+ (id)getFTSBrandHeadImageViewFromUrl:(id)arg1 username:(id)arg2;
+ (id)getFTSFeatureBrandHeadImageViewFromUrl:(id)arg1 username:(id)arg2;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)TrySetDefaultHeadImage;
- (void)TrySetDefaultHeadImage:(id)arg1;
- (void)SetHeadImage:(id)arg1;
- (id)getUpdateUrl;
- (void)setUpdateUrl:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setHeadViewByUsername:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)layoutSubviews;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (void)setTarget:(id)arg1 action:(SEL)arg2 withObject:(id)arg3;
- (void)OnPress:(id)arg1;
- (void)setOnClick:(id /* block */)arg1;
- (void)onClick;
- (id)m_frameView;
- (void)setM_frameView:(id)arg1;
- (id)m_headView;
- (void)setM_headView:(id)arg1;
- (CGSize)m_headSize;
- (void)setM_headSize:(CGSize)arg1;
- (id)m_oTarget;
- (void)setM_oTarget:(id)arg1;
- (SEL)m_selAction;
- (void)setM_selAction:(SEL)arg1;
- (id)m_object;
- (void)setM_object:(id)arg1;
- (id /* block */)onClickBlock;
- (void)setOnClickBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
