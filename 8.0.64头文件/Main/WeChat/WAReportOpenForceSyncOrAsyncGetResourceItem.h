@interface WAReportOpenForceSyncOrAsyncGetResourceItem : WAReportBaseItem
{
    unsigned long long _resourceType; // +0x8
    unsigned long long _forceTypeAndReason; // +0x10
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned long long)resourceType;
- (void)setResourceType:(unsigned long long)arg1;
- (unsigned long long)forceTypeAndReason;
- (void)setForceTypeAndReason:(unsigned long long)arg1;
@end
