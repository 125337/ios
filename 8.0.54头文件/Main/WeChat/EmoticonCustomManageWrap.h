@interface EmoticonCustomManageWrap : NSObject
{
    BOOL _needDoFlashAnimation; // +0x8
    BOOL _userInteractionEnabled; // +0x9
    BOOL _didShowReverseSelectResult; // +0xa
    BOOL _isReverseSelecting; // +0xb
    BOOL _reverseSelectingStatus; // +0xc
    BOOL _showingSelectStatus; // +0xd
    unsigned long long _type; // +0x10
    CEmoticonWrap * _emoticonWrap; // +0x18
    unsigned long long _status; // +0x20
    unsigned long long _selectIndex; // +0x28
    unsigned long long _reverseSelectIndex; // +0x30
    unsigned long long _temporarySelectOffset; // +0x38
}
- (id)init;
- (BOOL)isMarked;
- (void)setIsMarked:(BOOL)arg1;
- (void)setIsSelecting:(BOOL)arg1;
- (BOOL)isSelecting;
- (BOOL)isMoving;
- (void)setIsMoving:(BOOL)arg1;
- (BOOL)shouldShowMark;
- (BOOL)shouldShowIndex;
- (BOOL)shouldShowSelectMask;
- (unsigned long long)showingSelectIndex;
- (BOOL)showingSelectStatus;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)emoticonWrap;
- (void)setEmoticonWrap:(id)arg1;
- (BOOL)needDoFlashAnimation;
- (void)setNeedDoFlashAnimation:(BOOL)arg1;
- (BOOL)userInteractionEnabled;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)didShowReverseSelectResult;
- (void)setDidShowReverseSelectResult:(BOOL)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (BOOL)isReverseSelecting;
- (void)setIsReverseSelecting:(BOOL)arg1;
- (BOOL)reverseSelectingStatus;
- (void)setReverseSelectingStatus:(BOOL)arg1;
- (void)setShowingSelectStatus:(BOOL)arg1;
- (unsigned long long)selectIndex;
- (void)setSelectIndex:(unsigned long long)arg1;
- (unsigned long long)reverseSelectIndex;
- (void)setReverseSelectIndex:(unsigned long long)arg1;
- (unsigned long long)temporarySelectOffset;
- (void)setTemporarySelectOffset:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

