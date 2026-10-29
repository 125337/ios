@interface EmoticonCustomManageWrap : NSObject <NSCopying>
{
    BOOL _needDoFlashAnimation; // +0x8
    BOOL _userInteractionEnabled; // +0x9
    BOOL _didShowReverseSelectResult; // +0xa
    BOOL _noBackground; // +0xb
    BOOL _circleUnselectStyle; // +0xc
    BOOL _canShowLoading; // +0xd
    BOOL _noClickState; // +0xe
    BOOL _isReverseSelecting; // +0xf
    BOOL _reverseSelectingStatus; // +0x10
    BOOL _showingSelectStatus; // +0x11
    unsigned long long _type; // +0x18
    CEmoticonWrap * _emoticonWrap; // +0x20
    unsigned long long _status; // +0x28
    unsigned long long _selectIndex; // +0x30
    unsigned long long _reverseSelectIndex; // +0x38
    unsigned long long _temporarySelectOffset; // +0x40
}
- (id)init;
- (BOOL)isMarked;
- (void)setIsMarked:(BOOL)arg1;
- (void)setIsSelecting:(BOOL)arg1;
- (BOOL)isSelecting;
- (BOOL)isMoving;
- (void)setIsMoving:(BOOL)arg1;
- (BOOL)isReady;
- (BOOL)shouldShowMark;
- (BOOL)shouldShowIndex;
- (BOOL)shouldShowSelectMask;
- (unsigned long long)showingSelectIndex;
- (long long)selfSelectIndex;
- (void)setIndexSelected:(long long)arg1;
- (BOOL)showingSelectStatus;
- (id)copyWithZone:(_NSZone *)arg1;
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
- (BOOL)noBackground;
- (void)setNoBackground:(BOOL)arg1;
- (BOOL)circleUnselectStyle;
- (void)setCircleUnselectStyle:(BOOL)arg1;
- (BOOL)canShowLoading;
- (void)setCanShowLoading:(BOOL)arg1;
- (BOOL)noClickState;
- (void)setNoClickState:(BOOL)arg1;
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
