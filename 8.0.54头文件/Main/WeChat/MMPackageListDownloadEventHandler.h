@interface MMPackageListDownloadEventHandler : ProtobufEventHandler
{
    unsigned int m_tryCount; // +0x8
}
- (void)OnProtocolResponse:(id)arg1 shouldContinue:(BOOL *)arg2;
@end

