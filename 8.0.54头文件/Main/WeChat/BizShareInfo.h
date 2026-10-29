@interface BizShareInfo : NSObject
{
    NSString * _url; // +0x8
    NSString * _title; // +0x10
    NSString * _imgUrl; // +0x18
    NSString * _desc; // +0x20
    NSNumber * _itemShowType; // +0x28
    NSString * _srcUsername; // +0x30
    NSString * _displayUsername; // +0x38
    NSString * _msgSvrId; // +0x40
    NSString * _msgId; // +0x48
}
+ (id)makeWithUrl:(id)arg1 title:(id)arg2 imgUrl:(id)arg3 desc:(id)arg4 itemShowType:(id)arg5 srcUsername:(id)arg6 displayUsername:(id)arg7 msgSvrId:(id)arg8 msgId:(id)arg9;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)itemShowType;
- (void)setItemShowType:(id)arg1;
- (id)srcUsername;
- (void)setSrcUsername:(id)arg1;
- (id)displayUsername;
- (void)setDisplayUsername:(id)arg1;
- (id)msgSvrId;
- (void)setMsgSvrId:(id)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (void).cxx_destruct;
@end

