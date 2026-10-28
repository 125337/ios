@interface GCGroupMemberHeadModel : GCBaseCellModel
{
    BOOL _isOnline; // +0x8
    BOOL _needPlayAnimation; // +0x9
    BOOL _needFold; // +0xa
    int _numCircles; // +0xc
    NSString * _userName; // +0x10
    NSString * _headUrl; // +0x18
    NSString * _useAsText; // +0x20
    unsigned long long _cellType; // +0x28
    NSString * _stateIconUrl; // +0x30
    NSString * _statusDesc; // +0x38
    unsigned long long _status; // +0x40
    UIColor * _statusIconBgColor; // +0x48
    Slot * _slotInfo; // +0x50
}
- (Class)bindCellClass;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (id)useAsText;
- (void)setUseAsText:(id)arg1;
- (BOOL)isOnline;
- (void)setIsOnline:(BOOL)arg1;
- (unsigned long long)cellType;
- (void)setCellType:(unsigned long long)arg1;
- (id)stateIconUrl;
- (void)setStateIconUrl:(id)arg1;
- (id)statusDesc;
- (void)setStatusDesc:(id)arg1;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)statusIconBgColor;
- (void)setStatusIconBgColor:(id)arg1;
- (BOOL)needPlayAnimation;
- (void)setNeedPlayAnimation:(BOOL)arg1;
- (BOOL)needFold;
- (void)setNeedFold:(BOOL)arg1;
- (int)numCircles;
- (void)setNumCircles:(int)arg1;
- (id)slotInfo;
- (void)setSlotInfo:(id)arg1;
- (void).cxx_destruct;
@end
