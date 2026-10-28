@interface RedPointCtrlInfo : NSObject <PBCoding>
{
    NSMutableArray * _redPointList; // +0x8
    SequenceInfo * _seqInfo; // +0x10
}
+ (void)PBArrayAdd_redPointList;
+ (void)PBArrayAdd_seqInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)redPointList;
- (void)setRedPointList:(id)arg1;
- (id)seqInfo;
- (void)setSeqInfo:(id)arg1;
- (void).cxx_destruct;
@end
