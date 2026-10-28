@interface BizShareInfo : NSObject
{
    NSNumber * _shareType; // +0x8
    NSString * _url; // +0x10
    NSString * _title; // +0x18
    NSString * _imgUrl; // +0x20
    NSString * _desc; // +0x28
    NSNumber * _itemShowType; // +0x30
    NSString * _srcUsername; // +0x38
    NSString * _displayUsername; // +0x40
    NSString * _msgSvrId; // +0x48
    NSString * _msgId; // +0x50
}
+ (id)makeWithShareType:(id)arg1 url:(id)arg2 title:(id)arg3 imgUrl:(id)arg4 desc:(id)arg5 itemShowType:(id)arg6 srcUsername:(id)arg7 displayUsername:(id)arg8 msgSvrId:(id)arg9 msgId:(id)arg10;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)shareType;
- (void)setShareType:(id)arg1;
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
