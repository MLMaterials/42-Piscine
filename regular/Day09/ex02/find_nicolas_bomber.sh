# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyson <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/18 19:46:33 by gyson             #+#    #+#              #
#    Updated: 2016/08/18 20:46:43 by gyson            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep "nicolas\tBomber" | cut -c 16-26
