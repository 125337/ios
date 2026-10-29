@interface WCFileBrowseCell : UITableViewCell
{
    BOOL _bSelected; // +0x8
    id <WCFileBrowseCellDelegate> _delegate; // +0x10
    NSIndexPath * _cellIndexPath; // +0x18
    unsigned long long _type; // +0x20
    UIImageView * _selectImageView; // +0x28
    UIImageView * _fileHeaderView; // +0x30
    MMUILabel * _headLabel; // +0x38
    UILabel * _fileSizeLabel; // +0x40
    UILabel * _fromWhoLabel; // +0x48
    UILabel * _firstNameLabel; // +0x50
    UILabel * _centerLabel; // +0x58
    UILabel * _secondNameLabel; // +0x60
    UILabel * _timeLabel; // +0x68
    WCFileBrowseInfoBtn * _infoIconBtn; // +0x70
    WCFileBrowseInfo * _browseInfo; // +0x78
    NSString * _searchText; // +0x80
}
+ (UIEdgeInsets)getSperatorInset;
+ (UIEdgeInsets)getSperatorInsetForSectionLastCell;
+ (double)getCellHeight:(double)arg1 browseInfo:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 type:(unsigned long long)arg3;
- (void)initView;
- (void)updateWithBrowseInfo:(id)arg1;
- (void)updateWithBrowseInfo:(id)arg1 selected:(BOOL)arg2;
- (void)updateWithBrowseInfo:(id)arg1 selected:(BOOL)arg2 searchText:(id)arg3;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)updateView;
- (id)p_getFromWhoTitleString;
- (void)onPreviewFile:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellIndexPath;
- (void)setCellIndexPath:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)selectImageView;
- (void)setSelectImageView:(id)arg1;
- (id)fileHeaderView;
- (void)setFileHeaderView:(id)arg1;
- (id)headLabel;
- (void)setHeadLabel:(id)arg1;
- (id)fileSizeLabel;
- (void)setFileSizeLabel:(id)arg1;
- (id)fromWhoLabel;
- (void)setFromWhoLabel:(id)arg1;
- (id)firstNameLabel;
- (void)setFirstNameLabel:(id)arg1;
- (id)centerLabel;
- (void)setCenterLabel:(id)arg1;
- (id)secondNameLabel;
- (void)setSecondNameLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)infoIconBtn;
- (void)setInfoIconBtn:(id)arg1;
- (id)browseInfo;
- (void)setBrowseInfo:(id)arg1;
- (BOOL)bSelected;
- (void)setBSelected:(BOOL)arg1;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (void).cxx_destruct;
@end
