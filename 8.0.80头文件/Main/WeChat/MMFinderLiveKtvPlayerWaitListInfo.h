@interface MMFinderLiveKtvPlayerWaitListInfo : NSObject
{
    unsigned int _playerWaitListAllSize; // +0x8
    NSArray * _playerWaitList; // +0x10
    unsigned long long _version; // +0x18
}
+ (id)generateWaitListInfoFromPb:(id)arg1;
- (id)description;
- (unsigned int)playerWaitListAllSize;
- (void)setPlayerWaitListAllSize:(unsigned int)arg1;
- (id)playerWaitList;
- (void)setPlayerWaitList:(id)arg1;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
