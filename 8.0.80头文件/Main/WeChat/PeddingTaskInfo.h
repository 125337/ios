@interface PeddingTaskInfo : NSObject
{
    long long _type; // +0x8
    BizShareInfo * _shareInfo; // +0x10
    CContact * _contact; // +0x18
}
- (id)initWithType:(long long)arg1 shareInfo:(id)arg2 contact:(id)arg3;
- (void)printInfo;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)shareInfo;
- (void)setShareInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
