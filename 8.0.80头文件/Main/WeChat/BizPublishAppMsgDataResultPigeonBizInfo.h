@interface BizPublishAppMsgDataResultPigeonBizInfo : NSObject
{
    NSString * _nickname; // +0x8
    NSString * _headImgUrl; // +0x10
    NSString * _username; // +0x18
    NSString * _bizUin; // +0x20
    NSString * _appMsgId; // +0x28
    NSNumber * _idx; // +0x30
}
+ (id)makeWithNickname:(id)arg1 headImgUrl:(id)arg2 username:(id)arg3 bizUin:(id)arg4 appMsgId:(id)arg5 idx:(id)arg6;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headImgUrl;
- (void)setHeadImgUrl:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)bizUin;
- (void)setBizUin:(id)arg1;
- (id)appMsgId;
- (void)setAppMsgId:(id)arg1;
- (id)idx;
- (void)setIdx:(id)arg1;
- (void).cxx_destruct;
@end
