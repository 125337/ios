@interface MassSendCardMsgItem : NSObject
{
    NSString * _title; // +0x8
    NSString * _url; // +0x10
    NSString * _urlId; // +0x18
    NSNumber * _time; // +0x20
    NSString * _cover; // +0x28
    NSString * _cover_1_1; // +0x30
    NSString * _digest; // +0x38
    NSNumber * _itemShowType; // +0x40
    NSNumber * _play_length; // +0x48
    NSString * _play_url; // +0x50
    NSString * _player; // +0x58
    NSString * _vid; // +0x60
    NSNumber * _picNum; // +0x68
    NSNumber * _videoWidth; // +0x70
    NSNumber * _videoHeight; // +0x78
    NSNumber * _isPaySubscribe; // +0x80
}
+ (id)makeWithTitle:(id)arg1 url:(id)arg2 urlId:(id)arg3 time:(id)arg4 cover:(id)arg5 cover_1_1:(id)arg6 digest:(id)arg7 itemShowType:(id)arg8 play_length:(id)arg9 play_url:(id)arg10 player:(id)arg11 vid:(id)arg12 picNum:(id)arg13 videoWidth:(id)arg14 videoHeight:(id)arg15 isPaySubscribe:(id)arg16;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)urlId;
- (void)setUrlId:(id)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)cover_1_1;
- (void)setCover_1_1:(id)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)play_length;
- (void)setPlay_length:(id)arg1;
- (id)play_url;
- (void)setPlay_url:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (id)picNum;
- (void)setPicNum:(id)arg1;
- (id)videoWidth;
- (void)setVideoWidth:(id)arg1;
- (id)videoHeight;
- (void)setVideoHeight:(id)arg1;
- (id)isPaySubscribe;
- (void)setIsPaySubscribe:(id)arg1;
- (void).cxx_destruct;
@end
