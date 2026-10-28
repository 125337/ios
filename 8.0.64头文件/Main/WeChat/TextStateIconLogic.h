@interface TextStateIconLogic : NSObject
{
    NSObject<OS_dispatch_queue> * _queue; // +0x8
    WCCgiBlockHelper * _cgiBlockHelper; // +0x10
    TextStateIconStorage * _iconStorage; // +0x18
    TextStateIconStorage * _emojiIconStorage; // +0x20
    id /* block */ _iconUpdateHandler; // +0x28
    TextStatePassthroughIconList * _passthroughIconList; // +0x30
    TextStateExperimentTable * _experimentTable; // +0x38
    id /* block */ _experimentUpdateHandler; // +0x40
}
- (id)init;
- (void)checkAndUpdateIcon;
- (void)forceUpdateIconWithFlags:(unsigned int)arg1;
- (void)privateUpdateIconWithFlags:(unsigned int)arg1 completion:(id /* block */)arg2;
- (unsigned long long)minIntervalBetweenIconUpdate;
- (unsigned long long)mainResourceShowIconMaxCount;
- (id)activePassthroughIcon;
- (id)privateActivePassthroughIcon;
- (id)expiredPassthroughIconIdentifier;
- (void)expirePassthroughIcon;
- (id)cgiBlockHelper;
- (void)setCgiBlockHelper:(id)arg1;
- (id)iconStorage;
- (void)setIconStorage:(id)arg1;
- (id)emojiIconStorage;
- (void)setEmojiIconStorage:(id)arg1;
- (id /* block */)iconUpdateHandler;
- (void)setIconUpdateHandler:(id /* block */)arg1;
- (id)passthroughIconList;
- (void)setPassthroughIconList:(id)arg1;
- (id)experimentTable;
- (void)setExperimentTable:(id)arg1;
- (id /* block */)experimentUpdateHandler;
- (void)setExperimentUpdateHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end
