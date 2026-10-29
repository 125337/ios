@interface MassSendCardMsg : NSObject
{
    NSString * _userName; // +0x8
    NSString * _nickName; // +0x10
    NSNumber * _orderId; // +0x18
    NSNumber * _msgId; // +0x20
    NSNumber * _svrId; // +0x28
    NSNumber * _isExposed; // +0x30
    NSNumber * _isValidExposed; // +0x38
    NSNumber * _isExpand; // +0x40
    NSNumber * _isPlaceTop; // +0x48
    NSNumber * _createTime; // +0x50
    NSString * _rankSessionId; // +0x58
    NSNumber * _isBigPic; // +0x60
    NSArray * _items; // +0x68
}
+ (id)makeWithUserName:(id)arg1 nickName:(id)arg2 orderId:(id)arg3 msgId:(id)arg4 svrId:(id)arg5 isExposed:(id)arg6 isValidExposed:(id)arg7 isExpand:(id)arg8 isPlaceTop:(id)arg9 createTime:(id)arg10 rankSessionId:(id)arg11 isBigPic:(id)arg12 items:(id)arg13;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)svrId;
- (void)setSvrId:(id)arg1;
- (id)isExposed;
- (void)setIsExposed:(id)arg1;
- (id)isValidExposed;
- (void)setIsValidExposed:(id)arg1;
- (id)isExpand;
- (void)setIsExpand:(id)arg1;
- (id)isPlaceTop;
- (void)setIsPlaceTop:(id)arg1;
- (id)createTime;
- (void)setCreateTime:(id)arg1;
- (id)rankSessionId;
- (void)setRankSessionId:(id)arg1;
- (id)isBigPic;
- (void)setIsBigPic:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (void).cxx_destruct;
@end
