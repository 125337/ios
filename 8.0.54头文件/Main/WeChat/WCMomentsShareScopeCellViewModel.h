@interface WCMomentsShareScopeCellViewModel : NSObject
{
    BOOL _shouldRoundTopCorner; // +0x8
    BOOL _shouldRoundBottomCorner; // +0x9
    BOOL _shouldDisplayBottomLine; // +0xa
    BOOL _isFilterTagDataEnabled; // +0xb
    long long _cellType; // +0x10
    CContact * _contactData; // +0x18
    ContactTagData * _tagData; // +0x20
}
+ (id)sectionIdentifierOfType:(long long)arg1;
+ (long long)viewTypeOfSectionIdentifier:(id)arg1;
- (id)initWithUsername:(id)arg1;
- (id)initWithTagId:(unsigned int)arg1 isFilterTagDataEnabled:(BOOL)arg2;
- (id)initAsLoadMoreCellVM;
- (void)_initContactDataFromUsername:(id)arg1;
- (void)_initTagDataFromTagId:(unsigned int)arg1;
- (long long)cellType;
- (void)setCellType:(long long)arg1;
- (id)contactData;
- (void)setContactData:(id)arg1;
- (id)tagData;
- (void)setTagData:(id)arg1;
- (BOOL)shouldRoundTopCorner;
- (void)setShouldRoundTopCorner:(BOOL)arg1;
- (BOOL)shouldRoundBottomCorner;
- (void)setShouldRoundBottomCorner:(BOOL)arg1;
- (BOOL)shouldDisplayBottomLine;
- (void)setShouldDisplayBottomLine:(BOOL)arg1;
- (BOOL)isFilterTagDataEnabled;
- (void)setIsFilterTagDataEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

