@interface MMFinderGroupLiveChatBoxId : NSObject
{
    unsigned int _type; // +0x8
    NSString * _roomUsername; // +0x10
}
+ (id)genFinderBoxId:(id)arg1;
+ (BOOL)isFinderLiveBoxId:(id)arg1 equal:(id)arg2;
- (id)buildFinderBoxId;
- (BOOL)isEqualToFinderLiveBoxId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)roomUsername;
- (void)setRoomUsername:(id)arg1;
- (void).cxx_destruct;
@end

