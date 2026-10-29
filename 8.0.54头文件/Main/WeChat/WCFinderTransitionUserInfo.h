@interface WCFinderTransitionUserInfo : NSObject
{
    BOOL _interaction; // +0x8
    BOOL _isDraggingAsCard; // +0x9
    BOOL _isClosureType; // +0xa
    BOOL _isTransfer; // +0xb
    WCFinderTransitionUserInfo * _transferInfo; // +0x10
    NSString * _currentBrowseTid; // +0x18
    NSMutableDictionary * _datas; // +0x20
}
- (id)init;
- (void)setObject:(id)arg1;
- (id)objectForClass:(Class)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObjectNoRetain:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)clean;
- (id)transferInfo;
- (void)setTransferInfo:(id)arg1;
- (BOOL)interaction;
- (void)setInteraction:(BOOL)arg1;
- (BOOL)isDraggingAsCard;
- (void)setIsDraggingAsCard:(BOOL)arg1;
- (BOOL)isClosureType;
- (void)setIsClosureType:(BOOL)arg1;
- (id)currentBrowseTid;
- (void)setCurrentBrowseTid:(id)arg1;
- (BOOL)isTransfer;
- (void)setIsTransfer:(BOOL)arg1;
- (id)datas;
- (void)setDatas:(id)arg1;
- (void).cxx_destruct;
@end

