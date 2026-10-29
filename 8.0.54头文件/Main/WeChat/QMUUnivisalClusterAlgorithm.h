@interface QMUUnivisalClusterAlgorithm : QMUClusterAlgorithm
{
    int _thresholdZoomlevel; // +0x40
    QMUInScreenClusterAlgorithm * _highLevel; // +0x48
    QMUWorldClusterAlgorithm * _lowLevel; // +0x50
}
- (id)initWithDateStorer:(id)arg1 originData:(id)arg2;
- (void)refreshCluster;
- (double)distance;
- (void)setDistance:(double)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)map;
- (void)setMap:(id)arg1;
- (void)setThresholdZoomlevel:(int)arg1;
- (int)thresholdZoomlevel;
- (id)highLevel;
- (void)setHighLevel:(id)arg1;
- (id)lowLevel;
- (void)setLowLevel:(id)arg1;
- (void).cxx_destruct;
@end

