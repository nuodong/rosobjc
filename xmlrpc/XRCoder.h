//
//  XRCoder.h
//  XMLRPC
//
//  Created by znek on Tue Aug 28 2001.
//  $Id: XRCoder.h,v 1.4 2003/04/01 17:42:19 znek Exp $
//
//  Copyright (c) 2001 by Marcus M�ller <znek@mulle-kybernetik.com>.
//  All rights reserved.
//
//  Permission to use, copy, modify and distribute this software and its documentation
//  is hereby granted under the terms of the GNU Lesser General Public License, version 2.1
//  as published by the Free Software Foundation, provided that both the copyright notice
//  and this permission notice appear in all copies of the software, derivative works or
//  modified versions, and any portions thereof, and that both notices appear in supporting
//  documentation, and that credit is given to Marcus M�ller in all documents and publicity
//  pertaining to direct or indirect use of this code or its derivatives.
//
//  This is free software; you can redistribute and/or modify it under
//  the terms of the GNU Lesser General Public License, version 2.1 as published by the Free
//  Software Foundation. Further information can be found on the project's web pages
//  at http://www.mulle-kybernetik.com/software/XMLRPC
//
//  THIS IS EXPERIMENTAL SOFTWARE AND IT IS KNOWN TO HAVE BUGS, SOME OF WHICH MAY HAVE
//  SERIOUS CONSEQUENCES. THE COPYRIGHT HOLDER ALLOWS FREE USE OF THIS SOFTWARE IN ITS
//  "AS IS" CONDITION. THE COPYRIGHT HOLDER DISCLAIMS ANY LIABILITY OF ANY KIND FOR ANY
//  DAMAGES WHATSOEVER RESULTING DIRECTLY OR INDIRECTLY FROM THE USE OF THIS SOFTWARE
//  OR OF ANY DERIVATIVE WORK.
//---------------------------------------------------------------------------------------


#ifndef	__XRCoder_h_INCLUDE
#define	__XRCoder_h_INCLUDE


#import <Foundation/Foundation.h>


@interface XRCoder : NSObject
{
    NSMutableString *buffer;
}

- (id)initWithBuffer:(NSMutableString *)aBuffer;

- (void)encodeString:(NSString *)string;
- (void)encodeData:(NSData *)aData;
- (void)encodeDate:(NSDate *)aDate;
- (void)encodeDictionary:(NSDictionary *)dictionary;
- (void)encodeArray:(NSArray *)array;
- (void)encodeNumber:(NSNumber *)number;
- (void)encodeBool:(BOOL)yn;
- (void)encodeInt:(int)anInt;
- (void)encodeDouble:(double)aDouble;
- (void)encodeFloat:(float)aFloat;
- (void)encodeNullValue;
- (void)encodeException:(NSException *)exception;
- (void)encodeObject:(id)object;

- (id)decodeObject;

@end

#endif	/* __XRCoder_h_INCLUDE */
