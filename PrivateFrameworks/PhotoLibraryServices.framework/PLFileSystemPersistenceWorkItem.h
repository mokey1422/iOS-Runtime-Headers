/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSURL, NSMutableDictionary, NSMutableArray;

@interface PLFileSystemPersistenceWorkItem : NSObject {
    NSMutableDictionary *attributes;
    NSMutableArray *completionBlocks;
    NSURL *fileURL;
    double touchedDate;
    unsigned short transactionCount;
}

@property(retain) NSMutableDictionary * attributes;
@property(retain) NSMutableArray * completionBlocks;
@property(retain) NSURL * fileURL;
@property double touchedDate;
@property unsigned short transactionCount;

- (void)addCompletionBlock:(id)arg1;
- (id)attributes;
- (id)completionBlocks;
- (void)dealloc;
- (id)description;
- (void)enumerateCompletionBlocks:(BOOL)arg1;
- (id)fileURL;
- (void)persist;
- (void)setAttributes:(id)arg1;
- (void)setCompletionBlocks:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setTouchedDate:(double)arg1;
- (void)setTransactionCount:(unsigned short)arg1;
- (double)touchedDate;
- (unsigned short)transactionCount;

@end