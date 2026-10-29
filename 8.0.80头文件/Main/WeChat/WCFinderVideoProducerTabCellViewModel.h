@interface WCFinderVideoProducerTabCellViewModel : NSObject
{
    BOOL _isSelected; // +0x8
    NSString * _sectionId; // +0x10
    NSString * _sectionTitle; // +0x18
}
- (id)initWithSectionId:(id)arg1 sectionTitle:(id)arg2;
- (id)sectionId;
- (void)setSectionId:(id)arg1;
- (id)sectionTitle;
- (void)setSectionTitle:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end
