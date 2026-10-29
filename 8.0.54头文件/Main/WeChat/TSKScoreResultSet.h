@interface TSKScoreResultSet : NSObject <NSCopying>
{
    TSKMidiScoreResult * _acfScoreResult; // +0x8
    TSKMidiScoreResult * _pyinScoreResult; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)acfScoreResult;
- (void)setAcfScoreResult:(id)arg1;
- (id)pyinScoreResult;
- (void)setPyinScoreResult:(id)arg1;
- (void).cxx_destruct;
@end

