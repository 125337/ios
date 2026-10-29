@interface OpenFlowListParams : NSObject
{
    NSNumber * _clickIndex; // +0x8
    NSNumber * _hasNewMsgWhenClick; // +0x10
    NSNumber * _unreadMsgContactCount; // +0x18
    NSArray * _data; // +0x20
}
+ (id)makeWithClickIndex:(id)arg1 hasNewMsgWhenClick:(id)arg2 unreadMsgContactCount:(id)arg3 data:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)clickIndex;
- (void)setClickIndex:(id)arg1;
- (id)hasNewMsgWhenClick;
- (void)setHasNewMsgWhenClick:(id)arg1;
- (id)unreadMsgContactCount;
- (void)setUnreadMsgContactCount:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

