@interface RTEContentSection : MMObject <NSCopying>
{
    unsigned long long _length; // +0x8
    double _cellHeight; // +0x10
    RTETextView * _cellView; // +0x18
    unsigned long long _numOfParagraph; // +0x20
}
+ (id)creatSectionForString:(id)arg1;
+ (id)creatSectionArrayForString:(id)arg1;
+ (void)applyEditLocations:(id)arg1 inSections:(id)arg2 isAddParagraph:(BOOL)arg3;
+ (unsigned int)sectionSeparateParagraghNum;
+ (unsigned int)sectionSeparateStringLength;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)tryMergeSection:(id)arg1;
- (void)clearCacheView;
- (unsigned long long)length;
- (void)setLength:(unsigned long long)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (unsigned long long)numOfParagraph;
- (void)setNumOfParagraph:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

