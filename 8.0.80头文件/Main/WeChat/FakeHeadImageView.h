@interface FakeHeadImageView : MMUIView
{
    UIImageView * m_headImageView; // +0x8
    UIImageView * m_borderImageView; // +0x10
    NSString * m_usrName; // +0x18
    BOOL m_bRoundedCorner; // +0x20
    unsigned char _headUseScene; // +0x21
    unsigned char _headCategory; // +0x22
    unsigned int _conerSize; // +0x24
    CGSize _imageSize; // +0x28
}
- (id)initWithRoundCorner:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateWithUserName:(id)arg1;
- (id)getRealUserName:(id)arg1;
- (unsigned char)headUseScene;
- (void)setHeadUseScene:(unsigned char)arg1;
- (unsigned char)headCategory;
- (void)setHeadCategory:(unsigned char)arg1;
- (CGSize)imageSize;
- (void)setImageSize:(CGSize)arg1;
- (unsigned int)conerSize;
- (void)setConerSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end
