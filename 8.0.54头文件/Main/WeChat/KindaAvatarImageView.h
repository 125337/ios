@interface KindaAvatarImageView : KindaView <MMKAvatarImageView>
{
    MMHeadImageView * _m_headImageView; // +0xa8
    NSString * _m_userName; // +0xb0
}
- (id)init;
- (id)getView;
- (void)setUsername:(id)arg1;
- (id)getUsername;
- (void)setWidth:(float)arg1;
- (void)setHeight:(float)arg1;
- (id)getDarkModeUrl;
- (id)getDefaultUrl;
- (id)getImage;
- (id)getImageData;
- (long long)getScaleType;
- (id)getTintColor;
- (id)getUrl;
- (void)setDarkModeUrl:(id)arg1;
- (void)setDefaultUrl:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setScaleType:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_userName;
- (void)setM_userName:(id)arg1;
- (void).cxx_destruct;
@end

