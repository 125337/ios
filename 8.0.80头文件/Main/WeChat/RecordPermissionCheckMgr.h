@interface RecordPermissionCheckMgr : MMUserService <MMServiceProtocol>
{
    int m_CheckPermissionFlag; // +0x8
}
- (void)CheckRecordPermission;
- (void)callRecordPermissioned;
- (void)callRecordDenied;
@end
