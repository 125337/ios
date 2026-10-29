@interface BTBaseItemCellViewModel : MMObject
{
    double _viewWidth; // +0x8
    double _viewHeight; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    CContact * _contact; // +0x20
    BOOL _isTitleUp; // +0x28
    int _posInTL; // +0x2c
    int _msgSectionIndex; // +0x30
    BTBaseItemCellView * _cellView; // +0x38
    BTMsgSectionData * _sectionData; // +0x40
}
- (double)viewHeight;
- (id)itemViewClassName;
- (id)createItemCellView;
- (id)initWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (id)msgWrap;
- (id)contact;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (id)sectionData;
- (void)setSectionData:(id)arg1;
- (int)posInTL;
- (void)setPosInTL:(int)arg1;
- (int)msgSectionIndex;
- (void)setMsgSectionIndex:(int)arg1;
- (BOOL)isTitleUp;
- (void)setIsTitleUp:(BOOL)arg1;
- (void).cxx_destruct;
@end

