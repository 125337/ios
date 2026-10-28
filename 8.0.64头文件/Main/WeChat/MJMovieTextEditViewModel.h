@interface MJMovieTextEditViewModel : NSObject <MJStyleEditViewModelDataSource>
{
    BOOL _hasChanges; // +0x8
    long long _entranceType; // +0x10
    long long _editType; // +0x18
    NSString * _placeholder; // +0x20
    NSString * _text; // +0x28
    NSString * _subText; // +0x30
    NSString * _materialID; // +0x38
    OMJID * _contentDescBelongingID; // +0x40
    MJSegmentViewModel * _segmentVM; // +0x48
    NSString * _originalText; // +0x50
    OMJMaterialInfo * _defaultTitleMaterialInfo; // +0x58
    NSString * _originalSubText; // +0x60
    NSArray * _titleItems; // +0x68
    NSArray * _contentItems; // +0x70
    OMCSegment * _segment; // +0x78
    OMJMaterialManager * _manager; // +0x80
    unsigned long long _scene; // +0x88
}
- (id)initWithEntranceType:(long long)arg1 editType:(long long)arg2 placeholder:(id)arg3 text:(id)arg4 subText:(id)arg5 segment:(id)arg6 segmentVM:(id)arg7 materailManager:(id)arg8 scene:(unsigned long long)arg9 defaultTitleMaterialInfo:(id)arg10;
- (void)dealloc;
- (BOOL)hasTextChanges;
- (void)fetchDatas;
- (long long)entrancePageIndex;
- (long long)numberOfPages;
- (id)contentItemAtIndex:(long long)arg1;
- (id)titleItemAtIndex:(long long)arg1;
- (void)prepareTextSticker:(id /* block */)arg1;
- (unsigned long long)cacheSegmentType;
- (id)segmentID;
- (void)updateSegmentVM:(id)arg1;
- (void)updateText:(id)arg1;
- (void)updateSubText:(id)arg1;
- (void)updatePlaceholder:(id)arg1;
- (id)undoTitle;
- (id)currentStyleEditingSegmentVM;
- (long long)entranceType;
- (void)setEntranceType:(long long)arg1;
- (long long)editType;
- (void)setEditType:(long long)arg1;
- (id)placeholder;
- (void)setPlaceholder:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)subText;
- (void)setSubText:(id)arg1;
- (id)materialID;
- (void)setMaterialID:(id)arg1;
- (id)contentDescBelongingID;
- (void)setContentDescBelongingID:(id)arg1;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (BOOL)hasChanges;
- (void)setHasChanges:(BOOL)arg1;
- (id)originalText;
- (void)setOriginalText:(id)arg1;
- (id)defaultTitleMaterialInfo;
- (void)setDefaultTitleMaterialInfo:(id)arg1;
- (id)originalSubText;
- (void)setOriginalSubText:(id)arg1;
- (id)titleItems;
- (void)setTitleItems:(id)arg1;
- (id)contentItems;
- (void)setContentItems:(id)arg1;
- (id)segment;
- (void)setSegment:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
