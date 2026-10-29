@interface MMDBMigrationUtil : MMUserService <MMServiceProtocol>
{
    NSString * m_flagPath; // +0x8
}
- (void)onServiceInit;
- (unsigned long long)readValueFromFile;
- (BOOL)isFlagFinished:(unsigned long long)arg1;
- (void)setFlagFinished:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
