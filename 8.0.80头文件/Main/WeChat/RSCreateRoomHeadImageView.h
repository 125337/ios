@interface RSCreateRoomHeadImageView : MMUIView
{
    UIImageView * m_statusView; // +0x8
    FacingMember * m_facingMember; // +0x10
}
+ (CGSize)getHeadImageSize;
- (id)initWithFacingMember:(id)arg1;
- (void)updateWithFacingMember:(id)arg1;
- (id)m_facingMember;
- (void)setM_facingMember:(id)arg1;
- (void).cxx_destruct;
@end
