@interface EmoticonStoreDetailCoverImageView : MMUIView
{
    MMRedHeadLiner * m_tagImageView; // +0x8
    MMWebImageView * m_webImageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setTagHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (id)m_tagImageView;
- (void)setM_tagImageView:(id)arg1;
- (id)m_webImageView;
- (void)setM_webImageView:(id)arg1;
- (void).cxx_destruct;
@end

