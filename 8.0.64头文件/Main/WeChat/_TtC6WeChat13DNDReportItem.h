@interface _TtC6WeChat13DNDReportItem : NSObject
{
     scene; // +0x8
     chatName; // +0x10
     toUserName; // +0x20
     toTextStateID; // +0x30
     role; // +0x40
     action; // +0x48
     exposedSet; // +0x50
}
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (id)toTextStateID;
- (void)setToTextStateID:(id)arg1;
- (id)initWithScene:(long long)arg1;
- (void)reportExposed;
- (id)init;
- (void).cxx_destruct;
@end
