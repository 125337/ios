@interface MMFinderLiveTextStickerItem : MMFinderLiveStickerItemBase
{
    NSString * _text; // +0x8
    UIColor * _color; // +0x10
    unsigned long long _style; // +0x18
    MMFinderLiveStickerTextTemplateItem * _selectedTemplate; // +0x20
}
- (unsigned long long)stickerType;
- (BOOL)isStub;
- (id)stickerAccessibilityDescriptor;
- (BOOL)isContentEqualTo:(id)arg1;
- (id)createReviewSubmissionItem;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)selectedTemplate;
- (void)setSelectedTemplate:(id)arg1;
- (void).cxx_destruct;
@end

