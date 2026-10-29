@interface QConfigPreference : NSObject
{
    NSString * _businessKey; // +0x8
    NSString * _miniProgramID; // +0x10
    NSString * _configDirectoryPath; // +0x18
}
- (id)initWithBusinessKey:(id)arg1 miniProgramID:(id)arg2 configDirectoryPath:(id)arg3;
- (id)businessKey;
- (id)miniProgramID;
- (id)configDirectoryPath;
- (void).cxx_destruct;
@end

